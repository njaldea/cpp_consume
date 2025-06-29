
#include "Circle.hpp"

#include <nil/xit/gtest.hpp>
#include <nil/xit/gtest/utils/from_file.hpp>

XIT_FRAME_MAIN("$group/Step_4Main.svelte");

XIT_FRAME_OUTPUT_V("output", "$group/Step_5Output.svelte", Circle)
    .value("x", &Circle::x)
    .value("y", &Circle::y)
    .value("radius", &Circle::radius);

XIT_FRAME_TEST_INPUT_V(
    "input",
    "$group/Step_5Input.svelte",
    nil::xit::gtest::from_file_with_update<Circle, "step_5_input">()
)
    .value("x", &Circle::x)
    .value("y", &Circle::y)
    .value("radius", &Circle::radius);

bool operator==(const Circle& l, const Circle& r)
{
    return l.x == r.x && l.y == r.y && l.radius == r.radius;
}

template <>
struct nil::xit::gtest::file_codec<Circle>
{
    static void write(std::ostream& oss, const Circle& data)
    {
        oss << data.x << ',' << data.y << ',' << data.radius;
    }

    static Circle read(std::istream& iss)
    {
        Circle data = {};
        char c = {};
        iss >> data.x >> c >> data.y >> c >> data.radius;
        return data;
    }
};

using Sample = nil::xit::gtest::Test<
    nil::xit::gtest::Input<"input">,
    nil::xit::gtest::Output<"output"> //
    >;

XIT_TEST_F(Sample, circle, "$group/.")
{
    const auto& [sut] = xit_inputs;

    // do your test here

    get<0>(xit_outputs) = sut;
}

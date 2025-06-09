
#include "Circle.hpp"

#include <nil/xit/gtest.hpp>

XIT_FRAME_MAIN("$group/Step_3Main.svelte");

XIT_FRAME_OUTPUT_V("output", "$group/Step_3.svelte", Circle)
    .value("x", &Circle::x)
    .value("y", &Circle::y)
    .value("radius", &Circle::radius);

bool operator==(const Circle& l, const Circle& r)
{
    return l.x == r.x && l.y == r.y && l.radius == r.radius;
}

using Sample = nil::xit::gtest::Test<
    nil::xit::gtest::Input<>,
    nil::xit::gtest::Output<"output"> //
    >;

XIT_TEST_F(Sample, circle, "$group/.")
{
    auto sut = Circle{.x = 0.1, .y = 0.1, .radius = 1};

    // do your test here

    get<0>(xit_outputs) = sut;
}

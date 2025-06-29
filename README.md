# nil/xit-test example using vcpkg/gtest + svelte

See [example tests](./src/test/CMakeLists.txt) for more info.

- [step 1](./src/test/step_1.cpp)
    - vanilla gtest
- [step 2](./src/test/step_2.cpp)
    - direct translation of gtest to xit-test
- [step 3](./src/test/step_3.cpp)
    - addition of output frames
- [step 4](./src/test/step_4.cpp)
    - addition of input frames
- [step 5](./src/test/step_5.cpp)
    - file persistence

Dependencies
- [nil/xit-test](https://github.com/njaldea/nil-xit-test)
- [nil/xit](https://github.com/njaldea/nil-xit)
    - [flatbuffers](https://github.com/google/flatbuffers)
- [nil/gate](https://github.com/njaldea/nil-gate)
- [nil/clix](https://github.com/njaldea/nil-clix)
    - boost program_options
- [nil/service](https://github.com/njaldea/nil-service)
    - boost asio
    - boost beast
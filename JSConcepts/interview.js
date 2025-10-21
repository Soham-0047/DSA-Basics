function test() {
    const arrowTest = () => {
        console.log("Inside test parent", this)
    }
    arrowTest();
}

const test2 = () => {
    function arrowTest2() {
        console.log("Inside test2 pareant", this)
    }
    arrowTest2();
}

test();
test2();

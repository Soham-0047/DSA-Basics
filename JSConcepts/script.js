// // Hoisting when js variables moves the declaration on the top of the scope
// console.log(xyz);

// var xyz =  345;
// console.log(xyz)
// // Copied by value and copied by reference

// let obj1 =  {name: "Soham",value:"333"};
// let obj2 =  obj1;
// console.log(obj2);

// Revisit of digital logic operations
// let isLogic =  true;
// let isMaintained =  false;

// console.log(isLogic || isMaintained);
// console.log(isLogic && isMaintained);

//basic looping
// for

let array = ["number1", "number2", "number3"];

// for(let i=0;i<array.length;i++){
//     console.log(array[i]);
// }

// ES6 notation
// for(let item of array){
//     console.log(item);
// }

let objects = {
    name: "Soham",
    age: 23,
    city: "Kolkata"
}

// for(let person in objects){
//     console.log(`${person} : ${objects[person]}`);
// }

// Regular function

// const obj = {
//     name: "Soham",
//     callFunction: function regularFunc() {
//         console.log(this.name);
//     }
// }
// obj.callFunction();

setTimeout(() => {
    for(var i=0; i<4;i++){
        console.log(i);
    }
},3000)

console.log("\n");

setTimeout(() => {
    for(let i=0; i<4;i++){
        console.log(i);
    }
},3000)
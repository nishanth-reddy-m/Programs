let obj1 = {x:1,y:2};
let obj2 = {z:3};
obj2.__proto__ = obj1;
console.log(obj2.x);
console.log(Object.getOwnPropertyNames(obj2));
obj2.x = 4;
console.log(obj2.x);
console.log(Object.getOwnPropertyNames(obj2));
obj1.y = 5;
console.log(obj2.y);
console.log(obj1.y);
let figure = {
    getType: function() {
        return this.type ? this.type : "unknown";
    }
};
let circle = {
    type: "circle",
    center: {x:0, y:0},
    radius: 100
};
// circle.__proto__ = figure;
// console.log(figure.getType());
// console.log(circle.getType());
Object.setPrototypeOf(circle,figure);
console.log(figure.getType());
console.log(circle.getType());
let f = Object.getPrototypeOf(circle);
console.log(f.getType());

let triangle = Object.create(figure);
triangle.type = "triangle";
console.log(triangle.getType());

let Figure = function(){
    this.getType = function(){
        return this.type ? this.type : "unknown";
    }
}
let fig = new Figure;

let Square = function(){
    this.type = "Square"
};
Square.prototype = fig;
let square = new Square;

let Circle = function(){
    this.type = "Circle"
};
Circle.prototype = fig;
let cir = new Circle;

console.log(square.getType());
Object.prototype.hi = function(){console.log("hi")};
square.hi();
cir.hi();
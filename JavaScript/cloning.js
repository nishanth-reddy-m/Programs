let circle1 = {
    radius: 100,
    center: {
        x: 100,
        y: 100
    }};

// Shallow Clone
let scircle = {...circle1};
console.log("circle1.radius",circle1.radius,"scircle.radius",scircle.radius);
console.log("circle1.center.x",circle1.center.x,"scircle.center.x",scircle.center.x);
console.log();
scircle.radius = 200;
scircle.center.x = 200;
console.log("circle1.radius",circle1.radius,"scircle.radius",scircle.radius);
console.log("circle1.center.x",circle1.center.x,"scircle.center.x",scircle.center.x);
console.log();

// Deep Clone
let deepClone = obj => {
    let circle = {...obj}
    for(data in circle)
    {
        if(circle[data] instanceof Object)
        {
            circle[data] = deepClone(circle[data]);
        }
    }
    return circle;
};
let dcircle = deepClone(circle1);
dcircle.radius = 300;
dcircle.center.x = 300;
console.log("circle1.radius",circle1.radius,"dcircle.radius",dcircle.radius);
console.log("circle1.center.x",circle1.center.x,"dcircle.center.x",dcircle.center.x);
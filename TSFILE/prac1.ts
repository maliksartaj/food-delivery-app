var dist= (pt1: {x1:number;y1:number},pt2:{x2:number;y2:number})=>
{
    console.log(`horizontal distance::{pt1.x1-pt2.x2}`);
    console.log(`vertical distance::{pt1.y1-pt2.y2}`);
}
dist({x1:10,y1:20},{x2:10,y2:20});
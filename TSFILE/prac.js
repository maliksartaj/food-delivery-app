function distance(pt1, pt2) {
    console.log("Point 1: (" + pt1.x + ", " + pt1.y + ")");
    console.log("Point 2: (" + pt2.x + ", " + pt2.y + ")");
    var dx = pt2.x - pt1.x;
    var dy = pt2.y - pt1.y;
    var distSquared = dx * dx + dy * dy;
    var dist = Math.pow(distSquared, 0.5);
    console.log("Distance: " + dist);
}
distance({ x: 3, y: 4 }, { x: 7, y: 1 });

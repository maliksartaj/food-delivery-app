
interface Point {
    x: number;
    y: number;
  }
  
  function distance(pt1: Point, pt2: Point): void {
    console.log("Point 1: (" + pt1.x + ", " + pt1.y + ")");
    console.log("Point 2: (" + pt2.x + ", " + pt2.y + ")");
    const dx = pt2.x - pt1.x;
    const dy = pt2.y - pt1.y;
    const distSquared = dx * dx + dy * dy;
    const dist = distSquared ** 0.5;
    console.log("Distance: " + dist);
  }
  
  distance({ x: 3, y: 4 }, { x: 7, y: 1 });
  
  
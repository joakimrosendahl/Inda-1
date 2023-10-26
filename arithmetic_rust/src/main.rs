fn sum(a: i32, b: i32) -> i32 {
    return a + b;
}

fn difference(a: i32, b: i32) -> i32 {
    return a - b;
}

fn averege(a: f32, b: f32) -> f32 {
    return (a + b)/2.0;
}

fn main() {
    println!("{}", sum(3, 5));
    println!("{}", difference(2, 5));
    println!("{}", averege(3.0,  4.0));
}

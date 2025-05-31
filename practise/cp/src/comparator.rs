/*  _____    __________  _________     ___ ___      _____    .___  _________  
   /  _  \   \______   \ \_   ___ \   /   |   \    /  _  \   |   | \_   ___ \ 
  /  /_\  \   |       _/ /    \  \/  /    ~    \  /  /_\  \  |   | /    \  \/ 
 /    |    \  |    |   \ \     \____ \    Y    / /    |    \ |   | \     \____
 \____|__  /  |____|_  /  \______  /  \___|_  /  \____|__  / |___|  \______  /
         \/          \/          \/         \/           \/                \/ 
               _____       _____      ________  ___________                  
              /     \     /  _  \    /  _____/  \_   _____/                  
             /  \ /  \   /  /_\  \  /   \  ___   |    __)_                   
            /    Y    \ /    |    \ \    \_\  \  |        \                  
            \____|__  / \____|__  /  \______  / /_______  /                  
                    \/          \/          \/          \/     
         
    Author: Archaic_Mage        
    Name: Soham Tripathy    
    Institution: IIT Madras
*/

use std::collections::*;

fn get_input() -> String {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Failed to read input");
    input
}

struct Point {
    x: i32,
    y: i32,
}

fn solve() {
    let n = get_input().trim().parse::<i32>().unwrap();
    let mut points : Vec<Point> = Vec::new();
    for _i in 0..n {
        let line = get_input();
        let x:i32; let y:i32;
        let mut iter = line.trim().split_whitespace();
        x = iter.next().unwrap().parse::<i32>().unwrap();
        y = iter.next().unwrap().parse::<i32>().unwrap();
        points.push(Point{x,y});
    }
    //sort points by x if x is same then by y
    points.sort_by(|a,b| a.x.cmp(&b.x).then(a.y.cmp(&b.y)));
    //return value Less, Greater, Equal .cmp function
    // you can also create your own cmp function for custom types
    for i in 0..n {
        println!("{} {}", points[i as usize].x, points[i as usize].y);
    }
}

fn main() {
    let mut t = get_input().trim().parse::<i32>().unwrap();
    while t != 0 {
        solve(); t-=1;
    }
}


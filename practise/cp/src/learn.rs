//import modules
use std::collections::*;

fn get_input() -> String {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();
    input
}

fn que() {
    let mut adj: Vec<Vec<i32>> = vec![vec![]; 5];
    let mut visited: Vec<bool> = vec![false; 5];
    let mut q: VecDeque<i32> = VecDeque::new();
    q.push_back(0);
    while !q.is_empty() {
        let y = q.pop_front().unwrap();
        let x = y as usize;
        for i in 0..adj[x].len() {
            let v = adj[x][i] as usize;
            if !visited[v] {
                visited[v] = true;
                q.push_back(v as i32);
            }
        }
    }
}

//vector inputs
fn vect() {
    //1d vector
    let mut _n = get_input().trim().parse::<i32>().unwrap();
    let v = get_input()
        .trim()
        .split_whitespace()
        .map(|x| x.parse::<i32>().unwrap())
        .collect::<Vec<i32>>();
    println!("{:?}", v);

    //2d vector
    let mut _n = get_input().trim().parse::<i32>().unwrap();
    let mut _m = get_input().trim().parse::<i32>().unwrap();
    let mut v = Vec::new();
    for _i in 0.._n {
        let temp = get_input()
            .trim()
            .split_whitespace()
            .map(|x| x.parse::<i32>().unwrap())
            .collect::<Vec<i32>>();
        v.push(temp);
    }
    println!("{:?}", v);
}

fn solve() {
    println!("Hello World!");
    vect();
}

fn main() {
    let mut t;
    t = 1;
    while t != 0 {
        solve(); 
        t-=1;
    } 
}

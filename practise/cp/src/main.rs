
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

fn solve() {
    let n = get_input().trim().parse::<i32>().unwrap();
    let mut arr = get_input()
        .trim()
        .split_whitespace()
        .map(|x| x.parse::<i64>().unwrap())
        .collect::<Vec<i64>>();
    for i in 1..n {
        arr[i as usize] += arr[( i - 1 ) as usize]; 
    }
    let mut ans = 0;
    for k in 0..n {
        if n%k != 0 {continue;}
        let mut mxsum = i64::MIN;
        let mut mnsum = i64::MAX;
        for i in 0..n {
            mxsum = std::cmp::max(mxsum, arr[(i+k-1) as usize] - if i == 0 {0} else {arr[(i-1) as usize]});
            mnsum = std::cmp::min(mnsum, arr[(i+k-1) as usize] - if i == 0 {0} else {arr[(i-1) as usize]});
        }
        ans = std::cmp::max(ans, mxsum - mnsum);
    }
    println!("{}", ans);
}

fn main() {
    let mut t = get_input().trim().parse::<i32>().unwrap();
    while t != 0 {
        solve(); t-=1;
    }
}

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

}

fn main() {
    let mut t = get_input().trim().parse::<i32>().unwrap();
    while t != 0 {
        solve(); t-=1;
    }
}

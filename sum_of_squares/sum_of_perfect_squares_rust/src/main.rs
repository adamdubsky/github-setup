// Author: Reilly Schultz
// This program implements a solution to the sum of squares problem
// based on Lagrange's theorem that any number can be represented in
// the sum of four or fewer squares

fn main(){
    for i in 1..50001{
        let n = sum_of_squares(i);
        println!("{} squares needed to sum to {}", n, i)
    }
}

fn sum_of_squares(n: i64) -> i8{
    // Some variables we will use a couple times
    let float_n = n as f64;
    let sqrt_n: f64 = float_n.sqrt();

    // Case of 1: Answer is perfect square
    let case_1 = sqrt_n.fract() == 0.0;
    
    // Case of 4: Based on Lagrange's theorem:
    // The result is can be 3 if n is of the form 4^k*(8*m + 7)
    // Here, we check that it is not of this form
    let case_4 = {
        let mut n_mod = n;
        loop{ // Assesses the 4^k part
            if n_mod % 4 == 0{
                n_mod = n_mod / 4;
            } else {
                break n_mod;
            }
        };
        let n_check = n_mod % 8; // Assesses the 8*m part
        n_check == 7 // Assesses the + 7
    };
    
    // Case of 2: Check 2 in the brute force method
    let mut case_2 = false;
    for i in 1..(sqrt_n as i64 + 1) {
        let float_i = i as f64;
        if (float_n - (float_i * float_i)).sqrt().fract() == 0.0 {
            case_2 = true;
        }
    }

    if case_1 {
        return 1;
    } else if case_2 {
        return 2;
    } else if case_4 {
        return 4;
    } else { // Case of 3: All others are ruled out
        return 3;
    }
}
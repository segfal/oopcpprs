

fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut nums = nums;
    nums.sort();
    let mut i = 0;
    let mut j = nums.len() - 1;
    while i < j {
        let sum = nums[i] + nums[j];
        if sum == target {
            return vec![i as i32, j as i32];
        } else if sum < target {
            i += 1;
        } else {
            j -= 1;
        }
    }
    return vec![];
}



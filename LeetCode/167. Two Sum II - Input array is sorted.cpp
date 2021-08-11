class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;

        int leftPoint = 0;
        int rightPoint = numbers.size() - 1;

        while(leftPoint<rightPoint){
            int firstNum = numbers[leftPoint];
            int secondNum = numbers[rightPoint];

            int sum = firstNum + secondNum;

            if(sum > target){
                rightPoint--;
            }else if(sum < target){
                leftPoint++;
            }else{
                answer.push_back(leftPoint + 1);
                answer.push_back(rightPoint + 1);

                break;


            }
        }

        return answer;

    }
};

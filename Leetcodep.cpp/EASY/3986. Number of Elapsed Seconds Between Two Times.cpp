/*You are given two valid times startTime and endTime, each represented as a string in the format "HH:MM:SS".

Return the number of seconds that have elapsed from startTime to endTime.



Example 1:

Input: startTime = "01:00:00", endTime = "01:00:25"

Output: 25

Explanation:

endTime is 25 seconds ahead of startTime.
Example 2:

Input: startTime = "12:34:56", endTime = "13:00:00"

Output: 1504

Explanation:

endTime is 25 minutes and 4 seconds ahead of startTime, which equals 1504 seconds.



Constraints:

startTime.length == 8
endTime.length == 8
startTime and endTime are valid times in the format "HH:MM:SS"
00 <= HH <= 23
00 <= MM <= 59
00 <= SS <= 59
endTime is not earlier than startTime




code here leet code



class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int start_HH = stoi(startTime.substr(0, 2));
        int start_MM = stoi(startTime.substr(3, 2));
        int start_SS = stoi(startTime.substr(6, 2));

        int Total_startSecond;
        Total_startSecond = start_HH * 3600 + start_MM * 60 + start_SS;

        // This is endTime
        int end_HH = stoi(endTime.substr(0, 2));
        int end_MM = stoi(endTime.substr(3, 2));
        int end_SS = stoi(endTime.substr(6, 2));

        int Total_endSecond;
        Total_endSecond = end_HH * 3600 + end_MM * 60 + end_SS;

        int Total_Second = Total_endSecond - Total_startSecond;

        return Total_Second;
    }
};




*/
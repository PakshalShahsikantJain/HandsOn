/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Calculate Percentage
*/
//Function To Calculate Percentage
function Percentage(No, No2) {
    var ans = 0.0;
    ans = No2 / No * 100;
    return ans;
}
//Main Function
function main() {
    var no = 1000;
    var no2 = 745;
    var fret = 0.0;
    console.log("Jay Ganesh...");
    //Call To Percentage Fucntion
    fret = Percentage(no, no2);
    console.log("Percentage is : %d", fret, "%");
}
main();

/*
    Author : Pakshal Jain
    Date : 04/09/2022
    Program : To Calculate Division of Two Numbers
*/
function Division(No, No2) {
    var ans = 0;
    if (No2 == 0) {
        console.log("Invalid Input.....");
        return 0;
    }
    else if (No2 < 0) {
        No2 = -No2;
    }
    ans = No / No2;
    return ans;
}
/////////////////////////////////////////////////////////////////////////////////////////////
function main() {
    console.log("Jay Ganesh....");
    var no = 45;
    var no2 = -0;
    var ret = 0;
    ret = Division(no, no2);
    console.log("Division of Two Numbers is : %d", ret);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
main();

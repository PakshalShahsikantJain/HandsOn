/*
    Author : Pakshal Jain
    Date : 01/10/2022
    Program : To Calculate Multiplication of Factors of Entered Number
*/
//Function To Calculate Multiplication of factors of Entered Number
function Fact_Mult(No) {
    var i = 1;
    var Mult = 1;
    //Logic
    for (i = 1; i < No; i++) {
        if (No % i == 0) {
            Mult = Mult * i;
        }
    }
    return Mult;
}
//Main Function
function main() {
    var no = 56;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To Fact_Mult Function
    iret = Fact_Mult(no);
    console.log("Multiplication of Factors of Entered Number is : " + iret);
}
//Call To Main Function
main();

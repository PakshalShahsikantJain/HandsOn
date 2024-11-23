/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Convert Entered Money From Dollar To Inr
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Money 
function Convert(No : number) : number {
    var ans : number = 0;

    //Handleing Condition if Entered Number is Negative
    if(No < 0) {
        No = -No
    }

    //Logic 
    ans = No * 70;

    return ans;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() {

    var No : number = -5;
    var iret : number = 0;

    console.log("Jay ganesh....");

    //Call To Convert Function
    iret = Convert(No);

    console.log("Money After Conversion From Dollar to Inr is :",iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
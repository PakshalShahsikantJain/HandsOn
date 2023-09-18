/*
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Compare First N Contents of Entered Strings
function StrNCmpX(arr, brr, icnt) {
    var i = 0;
    var j = 0;
    if ((arr == null) && (brr == null)) {
        return false;
    }
    //Logic To Compare
    while (((i != arr.length) && (j != brr.length)) && icnt != 0) {
        if (arr[i] != brr[i]) {
            break;
        }
        i++;
        j++;
        icnt--;
    }
    if (arr[i] != brr[i]) {
        return false;
    }
    else {
        return true;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var size = 7;
    var str = "Pakshal Jain";
    var str2 = "Pakuhal Programmer";
    var bret = false;
    var arr;
    var brr;
    arr = Array.from(str);
    brr = Array.from(str2);
    console.log("Jay Ganesh....");
    //Call To StrNCmpX Function
    bret = StrNCmpX(arr, brr, size);
    //Handeling Condition if bret is true
    if (bret == true) {
        console.log("First N Contents of String are Equal");
    }
    //Handeling Condition if bret is false
    else {
        console.log("First N Contents of String are Not Equal");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();

/*
    Author : Pakshal Shashikant Jain
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StringCmp = /** @class */ (function () {
    //Constructor of Class
    function StringCmp() {
        this.str1 = " ";
        this.str2 = " ";
        this.arr = [];
        this.brr = [];
    }
    //Behaviour of Class To Take Input from user
    StringCmp.prototype.Accept = function () {
        this.str1 = "Pakshal Juin";
        this.str2 = "Pakshal Jain";
        this.arr = Array.from(this.str1);
        this.brr = Array.from(this.str2);
    };
    //Behaviour of Class To Check Both String are Equal or not
    StringCmp.prototype.StrCmpX = function () {
        var i = 0;
        var j = 0;
        if ((this.arr == null) && (this.brr == null)) {
            return false;
        }
        //Logic To Check
        if (this.arr.length != this.brr.length) {
            return false;
        }
        while ((i != this.arr.length) && (j != this.brr.length)) {
            if (this.arr[i] != this.brr[j]) {
                break;
            }
            i++;
            j++;
        }
        if (this.arr[i] != this.brr[j]) {
            return false;
        }
        else {
            return true;
        }
    };
    return StringCmp;
}()); //End of Class
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var bret = false;
    console.log("Jay Ganesh...");
    //Creating object of StringCmp Class
    var sobj = new StringCmp();
    //Call To Behaviours of Class
    sobj.Accept();
    bret = sobj.StrCmpX();
    if (bret == true) {
        console.log("Both String are Equal");
    }
    else {
        console.log("Both Strings are Not Equal");
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();

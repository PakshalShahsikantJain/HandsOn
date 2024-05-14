/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var StringSmall = /** @class */ (function () {
    //Constructor of Class
    function StringSmall(svalue) {
        this.i = 0;
        this.icnt = 0;
        this.str = svalue;
    }
    //Behaviour of Class To Count Small Characters
    StringSmall.prototype.Count = function () {
        var arr = [];
        arr = Array.from(this.str);
        //Logic To Count
        if (this.i != arr.length) {
            if ((arr[this.i] >= 'a') && (arr[this.i] <= 'z')) {
                this.icnt++;
            }
            this.i++;
            //Recursive Function Call To Behaviour of Class
            this.Count();
        }
        return this.icnt;
    };
    return StringSmall;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var str = "Seju Nair";
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of StringSmall Class
    var sobj = new StringSmall(str);
    //Call To Behaviour of Class
    iret = sobj.Count();
    //Printing Count
    console.log("Count of Small Characters Present in String %s is : %d", str, iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();

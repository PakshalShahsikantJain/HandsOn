/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all small
              characters into capital case.

              Input : "Marvellous Python 2"
              Output : "MARVELLOUS PYTHON 2" 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString 
{
    //Characteristics of Class
    arr : any[];
    brr : any[];
    str : string;
    
    //Constructor of Class
    constructor()
    {
        this.arr = [];
        this.brr = [];
        this.str = " ";
    }

    //Behaviour of Class To Take Input from User
    Accept()
    {
        this.str = "Pakshal Jain";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Copy String After Converting Case of Entered String 
    StrCapCpy()
    {
        var i : number = 0;
        var ascii : number = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy
        while(i != this.arr.length)
        {
            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                ascii = this.arr[i].charCodeAt() - 32;
                this.arr[i] = String.fromCharCode(ascii);        
            }

            this.brr[i] = this.arr[i];
            i++;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    //Creating object of CopyString Class
    var cobj = new CopyString();

    //Call To behaviours of Class
    cobj.Accept();
    cobj.StrCapCpy();

    //Printing Copied String 
    console.log("Copied String is : %s",cobj.brr.join(""));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
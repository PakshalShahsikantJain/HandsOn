/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Marvellous multi OS";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Copy Small Character From User
    StrCpySmall()
    {
        var i : number = 0;
        
        //Handeling Conditions if Entered String are null
        if((this.arr == null)&&(this.arr == null))
        {
            return;
        }

        //Logic To Copy String 
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                this.brr[i] = this.arr[i];
            }

            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z')) 
            {
                this.brr[i] = this.arr[i];
            }

            i++;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    //Creating object of Copy String Class
    var cobj = new CopyString();

    //Call To Behaviour of Class
    cobj.Accept();
    cobj.StrCpySmall();

    //Printing Copied String 
    console.log("Copied String is :",cobj.brr.join(""));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To main Function
main();
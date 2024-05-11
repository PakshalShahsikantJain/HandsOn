/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class StringSpace 
{
    //Characteristics of Class
    icnt : number;
    str : string;
    i : number;

    //Constructor of Class
    constructor(svalue : string)
    {
        this.icnt = 0;
        this.str = svalue;
        this.i = 0;
    }

    //Behaviour of Class To Count White Space
    WhiteSpace() : number
    {
        var arr : any[] = Array.from(this.str);

        if(this.i != arr.length)
        {
            if(arr[this.i] == ' ')
            {
                this.icnt++;
            }
            this.i++;

            //Recursive Function Call
            this.WhiteSpace();
        }

        return this.icnt;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var str : string = "Pakshal Shashikant Jain";
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of StringSpace Class
    var sobj : StringSpace = new StringSpace(str);

    //Call To Behaviour of Class
    iret = sobj.WhiteSpace();

    //Printing Count of White Spaces
    console.log("Count of White Spaces in Entered String '%s' is: %d",str,iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
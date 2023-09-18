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
class StringCmp
{
    //Characteristics of Class
    str1 : string;
    str2 : string;
    arr : any[];
    brr : any[];

    //Constructor of Class
    constructor()
    {
        this.str1 = " ";
        this.str2 = " ";
        this.arr = [];
        this.brr = [];
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str1 = "Pakshal Juin";
        this.str2 = "Pakshal Jain";
        this.arr = Array.from(this.str1);
        this.brr = Array.from(this.str2);
    }

    //Behaviour of Class To Check Both String are Equal or not
    StrCmpX() : boolean
    {
        var i : number = 0;
        var j : number = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return false;
        }

        //Logic To Check
        if(this.arr.length != this.brr.length)
        {
            return false;
        }

        while((i != this.arr.length)&&(j != this.brr.length))
        {
            if(this.arr[i] != this.brr[j])
            {
                break;
            }
            i++;
            j++;
        }

        if(this.arr[i] != this.brr[j])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var bret : boolean = false;

    console.log("Jay Ganesh...");

    //Creating object of StringCmp Class
    var sobj = new StringCmp();

    //Call To Behaviours of Class
    sobj.Accept();
    bret = sobj.StrCmpX();

    if(bret == true) 
    {
        console.log("Both String are Equal");
    }
    else
    {
        console.log("Both Strings are Not Equal");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
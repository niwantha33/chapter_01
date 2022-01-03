# Variables (Global and Local)

program එක ක්‍රියාත්මක කිරීමේදී වෙනස් වන යම් විශේෂිත දත්ත වර්ගයකි විචල්‍ය (Variable -Local and Global) නම් වේ.
 
Data  type [ දත්ත වර්ග ](int  , float, char  ) යනු ප්‍රධාන මතකය තුළ ගබඩා කිරීමට අවශ්‍ය  ස්ථානය වෙන්කිරිම. 

Program  එක තුල  භාවිතා වන සියලුම global  විචල්‍යයන් void setup () ඉහලින් ප්‍රකාශ කළ යුතුය, 
උදාහරණයක් :

එනම් ඒවායේ අදාළ දත්ත වර්ගයන් සමඟ ඉහළින් ටයිප් කර යුතුය. 
```
int  voltage  = 10;  // global  විචල්‍යයන්

void setup ()
{

}

void loop ()
{

  //Local Variable ඒවායේ අදාළ දත්ත වර්ගයන් සමඟ ටයිප් කර යුතුය. 
  int analogData =0; // Local  විචල්‍යයන්   

}

```

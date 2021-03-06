# Taking C Seriously

```
Dennis Ritchie, a co-creator of Unix and C, passed away...

It should hardly be necessary to state the importance of Ritchie's work.
C is the #2 language in use today according to the TIOBE rankings...

(Adamson, 2011)
```
- http://tiobe.com/tiobe-index/

```
Keep in mind that C was developed between 1969 and 1973, making it nearly 40 years old.
... when Paul Grahan considered the possible traits of The Hundred-Year Language,
the one we might be using 100 years from now, he overlooked the fact that
C had already made an exceptionally good start on a century-long reign.

(Adamson, 2011)
```
- www.paulgraham.com/hundred.html

```
And yet, despite on being so widely used and so important, C is widely disparaged.
It is easy, and popular, and eminently tolerated, to bitch and complain about C's primitiveness.

I've already had my say about this, in the PragPub article Punk Rock Languages,
in which I praised C's lack of artifice and abstraction, its directness, and its ruthlessness.
...

(Adamson, 2011)
```
- http://pragprog.com/magazines/2011-03/punk-rock-languages

```
C was the language of second-year Computer Science at Stanford...
The funny thing is that at the time, C was considered a "high-level".
At the time, abstracting away from the CPU was sufficient to count as "high-level";
granted, at the time we also drew a distinction between
"assembly language" and "machine language", presumably because there was still
someone somewhere without an assembler and was thus forced to provide the actual opcodes.
Today, C is considered a low-level language.
In my CodeMash 2010 talk on C, I postulated that
a high-level language is now expected to abstract away not only the CPU, but memory as well.

  In Beyond Java, Bruce Tate predicted we'd never see another mainstream language
  that doesn't run in a VM and offerthe usual benefits of that environment,
  like memory protection and garbage collection, and I suspect he's right.

(Adamson, 2011)
```
- http://slideshare.net/invalidname/oh-crap-i-forgot-or-never-learned-c-codemash-2010

```
But does malloc() make C "primitive"? I sure didn't think so in 1986.
In fact, it did a lot more than the languages at the time.
Dynamic memory allocation was not actually common at the time -...
And of course relative to Assembly language, where you're directly exposed to
the CPU and RAM, C's abstractions are profound.
If you haven't had that experience, you don't appreciate that
  a = b + c involves:
  - loading b and c into CPU registers,
  - invoking an "add" opcode,
  - and then copying the result from a register out to memory.
One lone of C, many lines of Assembly.

(Adamson, 2011)
```

```
There is a great blo from... years ago assessing the
Speed, Size, and Dependability of Programming Languages.
It represents the relationship between code size and performance as a 2D plot,
where an ideal language has high performance with little code,
and an obsolete language demands lots of work and is still slow.
These two factors are a classic trade-off, and the other two quadrants are
named after the traditional categorization:
- slow but expressive languages are "script",
- fast but wordy are "system".
Go look up gcc - it's clearly the fastest, but its wordiness is really not that bad.

(Adamson, 2011)
```
- http://blog.gmarceau.qc.ca/2009/05/speed-size-and-dependability-of.html

```
Perhaps the reason C has stuck around so long its that its bang for the buck really is
historically remarkable, and umlikely to be duplicated.
For all the advantages over Assembly, it maintains furious performance,
and the abstractions then built atop C (with the arguable exception of Java,
whose primary sin is being a memory pig) sacrifice performance for expressiveness.
We've always known this of course, but it takes a certain level of intellectual honesty
to really acknowledge how many extra CPU cycles we burn by writing code in something like
Ruby or Scala. If I'm going to run that slow, I think I'd at least want to
get out of curly-brace/function-call hell and adopt a different style of thinking, like LISP.

(Adamson, 2011)
```

```
...
It's only in immersing myself in iOS and Ma since... that I've really gotten good
with calling C in anger again, because on these platforms, C is a first-class language.
At the lower levels - including any framework with "Core" in its name - C is the *only* language.

And at the Core level, I'm sometimes glad to only have C.
For something like singnal processing..., handling me a void* is just fine...
In the higher level media frameworks, we have to pass around samples and frame buffers and such as
full-blown objects, and sometimes it feels heavier the it needs to.
...

(Adamson, 2011)
```

```
C is underappreciated as an application programming language.
Granted, there's definitely a knack to writing C effectively, but it's not just the language.
Actually, it's more the idioms of the various C libraries out there.
OPENGL code is unlike Core Graphics/Quartz, just like OpenAL is unlike Core Audio.
And that's to say nothing of the classic BSD and other open-source libraries,
some of which I still can't crack.
...
So maybe it's always going to be a learning process.

But honestly, I don't mind learning.
In fact, it's why I like this field.
And the fact that a 40-year old language can still be so clever, so austere and elegant,
and so damn fast, is something to be celebratedd and appreciated.

So, thanks Dennis Ritchie.
All these years later, I'm still enjoying the hell out of C.

(Adamson, 2011)
```


# Punk Rock Languages

## A Polemic

```
That C has won the end-user practically battle is obvious to everyone except developers.

(Adamson, 2011)
```

```
The year is 1978, and the first wave of punk rock is reaching its nihilistic peak
with infamous U.K. band the Sex Pistols touring the US and promptly breaking up
by the time they reach the West Coast.
Elsewhere, Brian Kernighan and Dennis Ritchie are putting the finishing touches on their book
The C Programming Language, which will become the de facto standardization of the language for years.
While tottaly unrelated, these two events share a common bond:
the ethos of both punk rock and C have lasted for decades,
longer than anyone in 1978 could possibly have imagined.

(Adamson, 2011)
```
- http://cm.bell-labs.com/cm/cs/cbook/

```
And in many important ways, C is the programmer's punk orck:
it's fast, messy, dangerous, and perfectly willing to kick your ass,
but it's also an ideal antidote to the pretensions and vanities
that plague so many new programming languages.
In an era of virtual machine and managed environments,
C original Punk Rock Language.

(Adamson, 2011)
```

## Lightning Strikes (Not Once But Twice)
```
This is a chord, this is another, this is a third.
Now form a band. - Cartoon on Sideburns Magazine

C has all the power of assembly language
combined with all the elegance and poetry of... assembly language - Erica Sadun

(Adamson, 2011)
```

```
Punk rock emerged as a reaction to the increasingly
self-indulgent and misguided musical trends of its time,
with progressive rock insisting on merging in influences 
from jazz and classical music..., and second-rate guitarists
noodling away in awe of Hendrix and Claprton with what
Joey Ramone called "endless solos that went nowhere."
Punk stripped away the nonsense of the times by focusing on faster, shorter, simpler songs.
... "in the U.S. the movement is more purely musical:... 
have rejected the rococo sophistication of much 1970s rock
and turned back to basic buzz and blast."

(Adamson, 2011)
```

```
C's development was, if anything, the opposite:
it was meant as an alternative to programming the PDP-7 in assembly.
In Dennis Ritchie's history of the language, he describes it as
the result of several attempts to provide higher-level languages for the platform,
a successor to BCPL and B (which Ritchie describes as
"BCPL squeezed into 8k bytes of memory and filtered through [Ken] Thompson's brain").
But this development wasn't driven by academic niceties or intellectual noodling.
It was about getting stuff done. As Ritchie recall:

"By 1971, our miniature computer center was beginning to have users.
We all wanted to create interesting software more easily.
Using assembler wasdreary enough that B, despite its performance problems,
had been supplemented by a small library of useful service routines
and was being used for more and more new programs."

(Adamson, 2011)
```
- http://cm.bell-labs.com/cm/cs/who/dmr/chist.html

```
Punk is famous for needing litte more that three chords.
C basically has three types - int, float, and char - embelished only
by being able to increase their bit-length as longS and doubleS.
It's gallingly simple to modern eyes, but hones quite closely to
what's actually on the CPU.
Look through the x86 or ARM7 instruction set and you will find
no references to Unicode strings or "objects" of any kind;
what you get is simple arithmetic and logical operations that work on
operands of 8, 16, and (maybe) 32 bits.
C is simple because, at their core, computers are simple.

(Adamson, 2011)
```

```
Of course, you can build any amount of complexity you like atop this simple foundation.
The American National Standards Institute (ANSI),
spend most of the 80s codifying the C Standard Library,
the collection of always-available libraries to perform essential operations
like memory management, string manipulation, and networking.
And you can then build your own libraries atop these.
But as long as you're still working in C, it's fairly easy
to keep your code running close to the metal,
working with simple structures and function calls.

Ritchie again:
"Despite some aspects mysterious to the beginner and occasionally even to the adept,
C remains a simple and small language, translatable with simple and small compilers.
Its types and operations are well-grounded in those provided by real machines,
and for people used to how computers work, learning the idioms for generating
time- and space-efficient programs is not difficult.
At the same time the language is sufficiently abstracted from machine details
that program portability can be achieved."

(Adamson, 2011)
```

```
With the rise of object-oriented programming, new languages co-opted C to provide OO features:
C++ has proven the most popular over time, while the Smalltalk-flavored Objective-C
might well have remained a footnote had it not been adopted by NeXT,
which le to its use in Apple's popular products.
Even so, within these languages, you still mix procedural C calls
with the object-oriented additions.

(Adamson, 2011)
```

## Police On My Back

```
Segmentation fault - command-line output of a C program with a broken pointer.

(Adamson, 2011)
```

```
The largely unmanaged freedoms of C, C++, or Objective-C
provide the opportunity to cause extraordinay havo with your code,
intentionally or not.
What's most distinctive about C compared to other popular languages today
is the exposure of memory pointers, and the disasters tha come with their misuse.
But the again, this is an intrinsic part of how computers work:
you have  a big block of memory (real or virtual), containing the system,
your program, and other programs.
If you can address any point in memory, and you read or write to an address that
your program doesn't own, what should happen?
One option is to allow programs to gallivant through each other's memory space.
As entertainment, this is "Core Wars"; as a coding error, it's a security nightmare.
In the real world, such mistakes are prohibited by operating systems,
and the offending program is terminated.

(Adamson, 2011)
```

```
A lot of people find this price of failure too high,
even though the fix is to just write better code,
and instead opt for an even more draconian option: taking away the keys.
Most modern languages provide their own memory management paradigms,
and never allow the developer to see a pointer.

Take a look at the TIOBE Programming Community Index,
and you'll see three kinds of languages in the top 10:

  - C and its OO derivatives:   C, C++, Objective-C
  - Interpreted languages:      Python, PHP, Visual Basic, Perl
  - Virtual Machine languages:  JAva, C#

The latter two groupings add profound new layers to the programming model:
interpreters to parse and interpret program code, or virtual machines
that create an entirely new execution environment for bytecode.
Importantly, in both of these cases, the programmer's code is not the executable:
run `ps` and you'll see that the interpreter or VM is what's running,
not your code per se.

(Adamson, 2011)
```
- https://www.tiobe.com/tiobe-index/
- www.tiobe.com/index.php/content/paperinfo/tpci/index.html

```
As we build abstraction upon abstraction,
we get further and further away from what's really going on in the CPU and memory.
In 2011, we now have popular scripting languages like Scala and Groovy
whose interpreters run in the Java Virtual Machine.
We're gone from workingwith the same data types that the CPU processes
to an elaborate stack of layer after layer of artifice and illusion.
If C is a punk band, blaring out the two or three basic types that the CPU understands,
this new style of programming is ... 
hiring the London Symphony Orchestra to play backup for his synthesizer.
...

(Adamson, 2011)
```

```
There's a price to pay for all this, the "abstraction cost" of creating
general-purpose interpreters and virtual machines.
Consider "Hello World" in C, Ruby, and Java,
with an added sleep so the program so the program doesn't immediately terminate:
...

Run all threee of these and take a look at the resources they demand for
this trivial program...
on Mac OS X the C program takes 356 KB, Ruby interpreter 1.6 MB, and thr JVM 25 MB.
Java also starts up 24 threads for this trivial program.
...

(Adamson, 2011)
```


## Nobody Likes You

```
As someone remarked: There are only two kinds of programming languages:
those people alway btich about and those nobody uses. - Bjarne Stroustrup
...

(Adamson, 2011)
```

```
Fans defend scripting and VM languages with arguments bases around the idea of
"programmer productivity": that faster CPUs and cheaper memory make it more economical
to accept these abstraction costs, in the interest of getting working code out the door faster.
Java has long been accused of tolerating bad programmers gladly,
but that knock against it applies equally well to all the scripting and VM languages.

Furthermore, look who's making these languages popular: it's the web developers.
All of the scriping languages in the TIOBE 10 are primarily associated with
developing web applications. Yet when we cast our gaze over to the desktop and the mobile device,
the scripting and VM languages largely disappear.
PHP is clearly meant for web use, but Ruby and Python are general-purpose enough that
they could be lashed to a UI framework to power desktop apps...
...

(Adamson, 2011)
```

```
The VM languages have had some success on the desktop, most obviously C# in the Windows realm,
where the go-to language was once Visual Basic, whose compiled P-code was also typically run
by a VM. But Desktop Java's long miserable history of underachievement tarnishes the viability
of desktop VMs, and with one exception (highlighted later in this article), there's little
apparent real-world use of scripting languages on the desktop.
Even on Linux, where scripting languages thrive on the server, GNOME, GIMP, vi, and emacs are
written in C, while KDE, Firefox, Thunderbird, VLC, and OpenOffice.org are in C++.

(Adamson, 2011)
```

```
Meanwhile in smartphones, the C languages are the only real option for Apple's market-leading
iOS devices.
And while Android uses the not-really-Java-nudge-wink "Dalvik" VM,
it offers the Java Native Interface as an escape slid to C for performance-hungry applications
like games.

(Adamson, 2011)
```

```
The takeaway is that when your code is running in the immediate presence of the user
- on his or her desktop, phone, game console, or tablet - the advantages touted by
interpreted and VM languages suddenly diminish.
Without network lateny to hide behind, and with resources at a premium
(particularly on the movile device), the extravagances of the webapp stack suddenly
becomes a lot less desirable.
Users see slow, memory-intensive applications on their systems and say,
as the last Clash album did, "Cut the Crap".

(Adamson, 2011)
```

```
That C has won the end-user practicality battle os obvious to everyone except developers.
Paul Graham's essay "The Hundred Year Language" manages to not mention C,
despite the fact that it's already got 40 years under its belt,
and has never ranked lower than #2 on the TIOBE list.

(Adamson, 2011)
```
- http://paulgraham.com/hundred.html



## Come Out and Play

```
Well, you know, for me punk has always been about doing things your own way.
What it represents for me is an ultimate freedom and sense of individuality.
Which basically becomes a metaphor for life and the way you want to live it.
                                                     - Billie Joe Armstrong
(Adamson, 2011)
```

```
C is quirky, flawed, and an enourmeous success.
While accidents of history surely helped, it evidently satisfied a need for a
system implementation language efficient enough to displace assembly language,
yet sufficiently abstract and fluent to describe algorithms and interactions
in a wide variety of enviroments.                           - Dennie Ritchie

(Adamson, 2011)
```

```
One of the defining traits of punk is the do-it-yourself (DIY) ethic,
a rejection of the need to buy products ot use existing systems,
and instead to attend to your own needs.
This attitude clearly suits C programming as well.
Indeed, it defines the language's history, with messy incompatibilities
of early versions of the language on different hardware,
and the development of wide-ranging libraries
that don't always use like-minded idioms or patterns.
As decades have rolled on, a motley collection of C code has been developed
by programmers around the world and across the decades,
providing everything from XML parsing to 3D graphics,
even if a libxml call looks nothing like an OpenGL one.


(Adamson, 2011)
```

```
Some of these libraries are open-source and part of GNU.
Others are commercial an liberally licensed.
And there's an incalculable amount of proprietary C code hidden away
in businesses around the world.
It doesn't matter:
C has no licensing concernsof any kind.
C isn't owned by a company (like Java, Objective-C, and C# effectively are),
but neither is it a slave to the FSF or any political movement.
Any programmer can pick it up and use it for any cause, good or evil,
that he or she sees fit.
No $99 developer program memberships, no license agreements, no genuflecting
to Richard Stallman... just code, compile, and run.


(Adamson, 2011)
```


## The Kids Aren't Alright

```
Punk is musical freedom.
It's saying, doing, and playing what you want.
In Webster's terms, 'nirvana' means freedom from pain, suffering and the external world,
and that's pretty close to my definition of Punk Rock.    - Kurt Cobain


(Adamson, 2011)
```

```
Having made the case for C as a sort of "punk rock language",
it's worth asking what other languages share C's traits of ruthless usefullness.
Let's continue the musical analogy: once the original wave of punk spent itself,
its values were adopted by a number of successor genres,
like post-punk, power pop, and new wave.
Bands like The Clash and Television combined punk's immediacy with better chops
and more outside influences.
The Offspring and Green Day revived punk in the 90s with catchy melodies,
launching and era of pop punk that persists to this day.
In the early 90s, punk contributed to grunge, which helped end the era of glammy
hair metal (sorry, Jon Bon Jovi and David Lee Roth).
As long as there's a musical trend that's too full of itself,
punk or one of its spin-offs will be waiting to tear it down.


(Adamson, 2011)
```

```
What's the least pretentious language in widespread use today?
Surely it has to be the much-derided JavaScript.
Though it's one of many languages that inherits mucj of its synta from C,
it is an interpreted language, object-oriented and packed with novel features
like dynamic typing, first-class functions, and closures.

It is possible to write elegant, clever code with JavaScript.
In true punk rock fashion, almost nobody does.

JavaScript in anger is a brutally efficient language.
Used primarily in the context of a browser,
it is often used to slash out quick-and-dirty onClick() implementations.
Despite being burdened with the confusing "Java" name,
no class declarations, package and visibility statements,
ot other niceties are required;
often enough, JavaScript code is rammed into the attribute of an HTML element.


(Adamson, 2011)
```

```
Older developers bemoan the lost days when computers shipped with BASIC built in,
or of learning scripting...
"Where," they ask, "are kids learning how to program?" missing the browser
that's staring them in the face.
The browser offers a JavaScript interpreter and enough toys in the DOM to keep
the young programmer occupied for years...
and the presence of the tree-structured DOM and JAvaScript's support for
regular expressions give the young programmer access to more significant and
interesting data structures than us folks were ever going to develop...
And thanks to the arms race between browser developers, JavaScript performance
continues to improve by leaps and bounds.


(Adamson, 2011)
```

```
Shouldn't beginning programmers lear from a more cleanly structured language?
That's always been the complaint, but the slop of BASIC didn't harm my generation
of developers (and mandatory Pascal didn't clean us up), so why should we fear
that JavaScript will pollute the next generation?
If anything, JavaScript's freedom to be as messy and unstructured as you want is a gift:
once the mess gets out of hand, the young developers will have to figure out
how to bring in classes, structure. OO, and the other tools that JavaScript provides
to set things right. But it;s DIY: JavaScript lets you be a good programmer,
but doesn't force you to.
How you structure your code and how you deal with problems is up to you.


(Adamson, 2011)
```



## Institutionalized


```
I've probably written an ungodly amount of C code,
but I hate C with a passion.
I've been writing a lot of Objective-C code lately...
which just fuels my hatred for C.
.h files are absolutely the work of the devil.
    - James Gosling
      (at 00:19:00)

(Adamson, 2011)
```

  James Gosling on Apple, Apache, Google, Oracle and the Future of Java
  01:20:09
- https://youtube.com/watch?v=9ei-rbULWoA

```
Not every language can be "punk".

Not every language should -:w
sometimes you do want the protections and comfortas of the Web Scripting languages,
just as sometimes you'd rather listen to the Beatles than Black Flag.
So, can we decide where to draw the line?
Since C and JavaScript seem to have become punk languages
through their evolution and use, not from their design,
it might be more useful to list the traits that we associate
with punk rock languages.


(Adamson, 2011)
```

```
Here are some signs that you're working with a punk rock language:

  - Owned by nobody

    As pointed out before, C isn't owned by any company, not is it controlled by FSF
    or any other part of the free software movement (though it was clearly instrumental
    in the development of Unix, Linux, and the GNU software stack).
    Similarly, JavaScript is nobody's property.
    It's OK for these languages to have formal specifications, and to accept contributions
    from all sources, but no one body controls them, and that's a great thing.

  - Allows the user to apply as much or as little structure as the or she chooses -
    It's not punk to keep the training wheels on all the time.

  - Is used in real-world systems or applications

    Perhaps we can create a category of "garage band language" for those that aren't ready
    to play real gigs yet. But until it's useful to someone, a language with no users is always
    at risk of turning out of a poseur.    

  - The natural appeal of the language is to write software with it,
    not to mess with the language itself - Solve your user's problems rather than
    indulging your own programming fetishes.

  - Inspires disdain, disgust, or outright hatred from people smart enough to know -
    Any idiot with a Slashdot handle can talk crap about anything.
    It's when you piss of the smart developers that you know you're working
    with something interesting.

Feel free to come up with your own definitions and categorizations.
After all, if there are too many rules, it's not punk anymore.


(Adamson, 2011)
```



## Good Riddance (Time of Your Life)

```
So, you have a choice.
You can keep adopting the flavour-of-the-month language, each one giving you
some beatiful new way to iterate over collections, so your method to collate
all the user's previous transactions into a table can be done in 10 lines of
code instead of 15. Or maybe you can use so much duck-typing that you get to
add the string "4" to number 2 (and be able to accurately predict wheter you'll
get the string "42" or the number 6).
Or maybe the next language will do away with all the traditional branch and 
loop statements (if, for, while, etc.), in favor of some new exotic side-effect-driven
style of programming that will be awesome as soon as you and everyone else "get it."

Or, maybe you can drop the pretensions, dismiss the illusions, and tear down
the fake world of intents, monads, and whatever crazy new thing they come up
with next.

What will be left is you, your code, and a CPU waiting to do stuff.

Kick... ass.


(Adamson, 2011)
```




# Guide to making your first command line project with ncurses

### Intro
Everyone's first programming experience is on some form of command line, usually a hello world in your language of choice.

```
int main() {
    printf("Hello World!");
    return EXIT_SUCCESS;
}
```

But eventually you grow out of it, you start to think "the command line is only for debugging" well I'm here to defend the command line, and all of its glory. Writing full-blown apps in the command line is not only fun, but its easy, and it can look damn good (assuming your down for a retro look). Making a game or app as a command line app is quicker and easier than messing around with complex graphics libraries, or god forbid, css.

This guide is going to be a look at how you can make command line apps and games (like [this one](https://github.com/harrinp/WalledIn)) simply and easily using the ncurses library. ncurses is a very common library for posix-compliant (_typically this means Macos and Linux_) command lines.

##### Caveats

This guide isn't going to go over anything to do with windows, ncurses supports posix compliant terminals. You may be able to get ncurses working on windows, but I offer no guarantees. Further, there are other libraries like ncurses which are for windows, namely [conio.h](https://en.wikipedia.org/wiki/Conio.h). I won't cover it here but the principles should be similar.

I'm not the expert, just a dev who already went through this learning process. This guide is going to be a bare-bones "get up and running" lesson, you can find a more detailed explanation of ncurses and all of its capabilities [here](https://invisible-island.net/ncurses/ncurses.faq.html).

##### Example files

All example files will be included in the examples folder of this repository.

### Getting started

#### Hello world v2

Lets redo our old hello world program and give it a

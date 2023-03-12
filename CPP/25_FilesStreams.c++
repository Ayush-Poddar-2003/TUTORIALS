/*

♥ C++ STREAMS ♥
- A stream is a logical device that either produces or consumes information. 
- A stream is linked to a physical device by the I/O system.

Input stream - The source stream that provide data to the program.
Output stream - The destination stream that receive output from the program. 

C++ containes cin and cout predefined streams that opens automatically during execution.
- cin represents the input stream connected to the standard input device 
- cout represents the output stream connected to standard output device

♥ STREAM CLASSES :
- The C++ I/O system contains a hierarchy of classes used to define various streams.
- These classes are declared in the header file iostrem. 
- The file should be included in all programs that communicate with the console unit.

- " ios --> istream(input)+ostream(output) --> iostream(input/output stream)"

- The class ios is declared as the virtual base class so that only one copy of its members are inherited by the iostream.  
- The class ios provides the basic support for formatted and unformatted  input/output  operations.
- The class istream provides the facilities for formatted and unformatted input
- The class ostream(through inheritance) provides the facilities for formatted output. 
- The class iostream provides the  facilities  for  handling  both  input  output  streams.  - Three  classes  namely  istream_withassign, ostream_withassign and iostream_withassign add assignment operators to these classes


*/
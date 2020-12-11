<ul>
    <li> Scope and lifetime are entirely different concepts. Scope applies to 
         identifiers, whereas lifetime applies to object.</li>
    <li> There are four storage durations: automatic, static thread, and allocated</li>
    <li> Static object must be initialized with a const value and not a variable</li>
    <li> You should never declare a function with an empty parameter list in C.</li>
    <li> Static <em>volatile</em> qualified objects are used to model memory-mapped
         input/output (I/O) ports, and static constant <em>volatile</em>-qualified
         objects model memory-mapped input ports such as a real-time clock.</li>
    <li> Type qualifier <code>extern</code> is declared when the variable needs
         to be shared across multiple files </li>
    <li> The C standards committees intends, starting with C2x, to acommodate
         only two's complement representation. </li>
    <li> Think of function-like macros as functions that operates on generic types </li>
 
</ul>

<dl>
    <dt>word</dt>
    <dd>Natural, fixed-sized unit of a data handled by the instruction set or the 
    hardare of the processor. </dd>
    <dt>Alignment</dt>
    <dd>number of bytes between successive addresses at which a given object can be
    allocated.</dd>
    <dt>Padding<dt>
    <dd>Unused bits</dd>
    <dt>Width</dt>
    <dd>The number of bits used to represent a value of a given type, excluding 
        padding, but including the sign </dd>
    <dt>Precision</dt>
    <dd>Number of bits used to represent values, excluding sign and padding bits.</dd>
    <dt>Representable value</dt>
    <dd>A value that can be represented in the number of bits available to an 
        object of a particular type.</dd>
    
</dl>

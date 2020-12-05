<ul>
    <li> Scope and lifetime are entirely different concepts. Scope applies to 
         identifiers, whereas lifetime applies to object.</li>
    <li> There are four storage durations: automatic, static thread, and allocated</li>
    <li> Static object must be initialized with a const value and not a variable</li>
    <li> You should never declare a function with an empty parameter list in C.</li>
    <li> Static <em>volatile</em> qualified objects are used to model memory-mapped
         input/output (I/O) ports, and static constant <em>volatile</em>-qualified
         objects model memory-mapped input ports such as a real-time clock.</li>
</ul>

<dl>
    <dt>word</dt>
    Natural, fixed-sized unit of a data handled by the instruction set or the 
    hardare of the processor.
    <dt>Alignment</dt>
    number of bytes between successive addresses at which a given object can be
    allocated.
</dl>

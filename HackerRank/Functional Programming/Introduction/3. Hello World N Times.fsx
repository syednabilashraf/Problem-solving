//Enter your code here. Read input from STDIN. Print output to STDOUT

let helloWorlds  n =
    for i in 1 .. n do
        printfn "Hello World"

open System

[<EntryPoint>]
let main argv =
    let n = Console.ReadLine() |> int
    helloWorlds n
    0 // return an integer exit code

module Main
 where

printAnswers :: [Int] -> [String] -> IO ()
printAnswers [] [] = do putStr ""
printAnswers (time:times) (thing:things) = do
  putStrLn $ "At " ++ (hour time) ++ ":" ++ (minute time) ++ " I'm " ++ thing
  printAnswers times things
  where
    hour time = show (div time 3600)
    minute time = show (div (mod time 3600) 60)

main :: IO ()
main = do
  putStrLn "Welcome to HackUPC: the GAME. Your answer is below:"
  printAnswers times things
  where
    times = [45420, 48900, 48960, 49020, 49080, 49140, 49200]
    things = ["doing the GAME instead of programming my hack.",
              "stacking cups.",
              "giving you the answer for the GAME.",
              "haskelling",
              "praising the Sun.",
              "saving the world.",
              "finishing the execution of this program."]

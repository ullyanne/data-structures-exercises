bubble = c(458, 1954, 4286, 7913, 13696, 18037, 33743, 44262, 64690)
insertion = c(95, 405, 855, 1516, 2390, 3958, 7114, 6151, 11765)
merge = c(2, 5, 9, 10, 13, 16, 26, 21, 37)
tamanho = c(10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000)

plot(tamanho, bubble, type = "b", frame = FALSE, pch = 19, 
    col = "red", xlab = "x", ylab = "y")

lines(tamanho, bubble, pch = 18, col = "blue", type = "b", lty = 2)
lines(tamanho, insertion, pch = 18, col = "black", type = "b", lty = 2)
lines(tamanho, merge, pch = 18, col = "red", type = "b", lty = 2)
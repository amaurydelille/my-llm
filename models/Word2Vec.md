# Word2Vec
## SKip-gram model
Given a target word wtwt​ in the center of a context window, the Skip-gram model attempts to predict the surrounding context words $w_{t−k},w_{t−k+1},...,w_{t+k}, w_{t−k}​, w_{t−k+1}​,...,w_{t+k},$ where $k$ is the context window size. The idea is to **maximize the probability of observing the context words $C_t$ given the target word $w_t$.**

$C_t = \{ w_{t-k}, ..., w_{t+k} \}$

The objective is to maximize:
$P(C_t|w_t) = \prod_{i=t-k}^{t+k} P(w_i|w_t)$

This formula assume that observice a particular context word $w_i$ depends only on the target word $w_t$ and is **independant** of all other context words.

So we can treat each context word prediction separately. Thus the goal becomes maximizing:

$L = \sum_{t=1}^{T} \sum_{i=t-k}^{t+k}log(P(w_i|w_t))$ where $T$ is the total number of words in the corpus.

### Inference
The probability of observing a context word $w_i$ givent the target word $w_t$ is calculated using **softmax.** 
I'm too lazy to write the formula sorry.
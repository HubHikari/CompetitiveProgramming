#import sys
#input = sys.stdin.buffer.readline
#sys.setrecursionlimit(10 ** 7)


def branchAndBound(N, items, lim_w):
    items.sort(key=lambda x: x[0] / x[1], reverse=True)  # 価値／重さ　の順にソート
    Value = []
    Weight = []
    Ratio = []
    for v, w in items:
        Value.append(v)
        Weight.append(w)
        Ratio.append(v / w)

    def upperbound(cur, cur_w, cur_v):
        # (cur)番目の荷物まで選択済み。(cur+1)番目から順番に取っていく。
        # max_v は価値の最大値の候補。 ub_v は緩和問題の解(上界)に相当。
        rest_w = lim_w - cur_w
        max_v = ub_v = cur_v
        for j in range(cur + 1, N):
            if Weight[j] <= rest_w:
                rest_w -= Weight[j]
                max_v += Value[j]
                ub_v = max_v
            else:
                ub_v += Ratio[j] * rest_w
                break
        return max_v, ub_v

    answer_v, ub_v = upperbound(-1, 0, 0)

    def dfs(cur, ub_v, cur_w, cur_v):  # 荷物の番号, 上界, 暫定の重さ, 暫定の価値
        nonlocal answer_v
        if answer_v > ub_v or cur == N:
            # 暫定解 > 上界 or 荷物の選択が完了
            return
        if cur_w + Weight[cur] <= lim_w:
            # 荷物を入れる場合
            dfs(cur + 1, ub_v, cur_w + Weight[cur], cur_v + Value[cur])
        # 荷物を入れない場合
        max_v, ub_v = upperbound(cur, cur_w, cur_v)
        if max_v > answer_v:
            # 暫定解の更新
            answer_v = max_v
        if ub_v > answer_v:
            dfs(cur + 1, ub_v, cur_w, cur_v)

    dfs(0, ub_v, 0, 0)

    return answer_v


def main():
    # 入力と出力
    N, lim_w = map(int, input().split())
    times = list(map(int, input().split()))
    #print(times)
    #items = [list(map(int, input().split())) for _ in range(N)]
    #items = [list([times[i],times[i]) for i in range(N)]
    items=[]
    for i in range(0,N):
        items.append([times[i],times[i]])
    #print(l)
    #print(items)
    print(branchAndBound(N, items, lim_w))


if __name__ == "__main__":
    main()
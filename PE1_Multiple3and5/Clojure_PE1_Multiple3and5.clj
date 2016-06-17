(defn multof [x n] (zero? (rem x n)))

((def solution-001 []
  (reduce + (filter (fn [x] (or (multof x 3)
                                (multof x 5)))
                    (range 1000))))

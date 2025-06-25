var merge = function(intervals) {
    const result = [];

    if (intervals.length <= 1) return intervals;

    intervals.sort((a, b) => a[0] - b[0]);

    let interval = intervals[0];

    for (let i = 1; i < intervals.length; i++) {
        if (intervals[i][0] <= interval[1]) {
            interval[1] = Math.max(interval[1], intervals[i][1]);
        } else {
            result.push(interval);   // ✅ Push only when merge ends
            interval = intervals[i]; // \U0001f504 Start a new interval
        }
    }

    result.push(interval); // ✅ Push the last merged interval
    return result;
};

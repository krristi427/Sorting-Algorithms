const std = @import("std");

pub fn bubble_sort(s: []isize) void {
    var n = s.len;
    var i: usize = 0;
    while (i < n) : (i += 1) {
        var j: usize = 0;
        while (j < n - i - 1) : (j += 1) {
            if (s[j] > s[j + 1]) {
                std.mem.swap(isize, &s[j + 1], &s[j]);
            }
        }
    }
}

pub fn main() void {
    var arr = [_]isize{ 10, 14, 9, 5, 2, 18, 7 };
    bubble_sort(&arr);
    std.debug.print("Sorted array is: ", .{});
    for (arr) |x| { std.debug.print("{} ", .{x}); }
    std.debug.print("\n", .{});
}

import time

if __name__ == "__main__":
    # start timer
    start_time = time.perf_counter()

    # the bigass app
    print("This I remember how to write")
    time.sleep(1)

    # finish and print timer
    end_time = time.perf_counter()
    diff_time = end_time - start_time
    print(f"Runtime: {diff_time:8.5}s")

#include <stdio.h>

int main() {

    int path;
    int reachedFinal = 0;

    scanf("%d", &path);

    /* LEFT PATH */
    if (path == 1) {
        printf("Player chooses the Left path.\n");

        int swamp;
        scanf("%d", &swamp);

        if (swamp == 1) {
            printf("Poor choice, Game Over!");
            return 0;
        }

        printf("Player found a bridge.\n");

        int bridge;
        scanf("%d", &bridge);

        if (bridge == 2) {
            printf("Poor luck, Game Over!");
            return 0;
        }

        printf("Player crosses the bridge safely.\n");
        reachedFinal = 1;
    }

    /* MIDDLE PATH */
    else if (path == 2) {
        printf("Player chooses the Middle path.\n");

        int ans;
        scanf("%d", &ans);

        /* Correct answer = 582 */
        if (ans != 582) {
            printf("Foolish player, Game Over!");
            return 0;
        }

        printf("Player solved the puzzle.\n");
        reachedFinal = 1;
    }

    /* RIGHT PATH */
    else if (path == 3) {
        printf("Player chooses the Right path.\n");

        int ans;
        scanf("%d", &ans);

        /* Correct answer = 30 */
        if (ans != 30) {
            printf("Foolish player, Game Over!");
            return 0;
        }

        printf("Player solved the puzzle.\n");
        reachedFinal = 1;
    }

    /* FINAL ROOM */
    if (reachedFinal == 1) {
        int chest;
        scanf("%d", &chest);

        if (chest == 1) {
            printf("All that glitters is not gold, Game Over!");
        }
        else if (chest == 2) {
            printf("All your efforts were for nothing, Game Over!");
        }
        else if (chest == 3) {
            printf("Congratulations!! You won the treasure.");
        }
    }

    return 0;
}

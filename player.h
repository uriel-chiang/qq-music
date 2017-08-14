#ifndef PLAYER_H
#define PLAYER_H

#include <QMediaPlayer>
#include <QMediaPlaylist>

class Player : public QMediaPlayer
{
    Q_OBJECT

public:
    Player();

    QMediaPlaylist *playList;

    bool status();
};

#endif // PLAYER_H
#ifndef MAP_H
#define MAP_H
#include <QPixmap>

class Map
{
public:
    // 构造函数
    Map();

    // 地图滚动坐标计算
    void mapPosition();

public:

    // 地图图片对象
    QPixmap m_map1;
    QPixmap m_map2;

    // 地图Y轴坐标
    int m_map1_posY;
    int m_map2_posY;

    // 地图滚动幅度
    int m_scroll_speed;

    // 分数记录
    int m_score;
};

#endif // MAP_H

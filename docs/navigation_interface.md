# Navigation Interface

Distance measurements are in meters
Proximity calculations use mi^2
All coordinates are in CRS EPSG:4326 (degrees)

Graph of Map: `landmark_t landmarks[LEN_LANDMARKS]`
- LEN_LANDMARKS = 40
- landmarks.h
- landmark_t:
    - float_t x
        - Longitude of centroid of landmark in degrees
    - float_t y
        - Latitude of centroid of landmark in degrees
    - char name[48]
        - Name of landmark (lowercase)
    - uint32_t list_len
        - Length of adj_list and dist_list
    - uint8_t* adj_list
        - List of adjacent nodes
    - float_t* dist_list
        - List of distances to adjacent nodes
    - float_t buffer_distance
        - Radius of circle approximation of landmark polygon centered on centroid

Path from start to destination: `int path[MAX_PATH_LENGTH]`
- MAX_PATH_LENGTH = 20
- dijkstra.h

Current Position: `coord_t coord`
- navigation.h
- coord_t:
    - float_t x
    - float_t y

Visited Nodes: `uint8_t visited_nodes[LEN_LANDMARKS]`
- navigation.h
- 0 for not visited landmarks
- 1 for visited landmarks

Current distance to nodes on path: `float_t path_distances[MAX_PATH_LENGTH]`
- navigation.h
- Distance units are mi^2

Navigation Main Init: `int navigation_main_init(uint8_t destination)`
- navigation.h
- This first checks the quality of the GPS connection.
    - Returns 0 if no GPS fix
    - Returns number of satellites connected when GPS fixed

Navigation Main Loop: `void navigation_main_loop()`
- navigation.h
- This is the main navigation loop that runs proximity calculations in the background.
- **Within this function, a function call should be made when something should be done when near a node**

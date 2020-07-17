bool close_enough(float v1, float v2) { 
    if (abs(v2-v1) > 0.0001 ) {
        return false;
    } 
    return true;
}

bool close_enough(vector < vector <float> > g1, vector < vector <float> > g2) {
    int i, j;
    float v1, v2;
    for (i=0; i<g1.size(); i++) {
        for (j=0; j<g1[0].size(); j++) {
            v1 = g1[i][j];
            v2 = g2[i][j];
            if (abs(v2-v1) > 0.0001 ) {
                return false;
            }
        }
    }
    return true;
}
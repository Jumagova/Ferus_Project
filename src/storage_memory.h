#ifndef STORAGE_MEMORY_H
#define STORAGE_MEMORY_H

#include <Preferences.h>

class InternalMemoryStorage
{
public:
    static InternalMemoryStorage& getInstance(const char* namespaceName);

    void saveStringData(const char* key, const char* value);
    void getStringData(const char* key, char* buffer, size_t bufferSize);
    void saveUIntData(const char* key, uint32_t value);
    void getUIntData(const char* key, uint32_t& value);
    void deleteData(const char* key);

private:
    InternalMemoryStorage(const char* namespaceName);
    // ~InternalMemoryStorage();

    Preferences preferences;
};


#endif
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBundleRecordUpdater : NSObject {
    struct LSBundleData { 
        unsigned long _clas; 
        unsigned long long _bundleFlags; 
        unsigned long _plistContentFlags; 
        unsigned long _itemFlags; 
        unsigned char _highResFlags; 
        unsigned char _appNapFlags; 
        unsigned short _archFlags; 
        unsigned int _hfsType; 
        unsigned int _hfsCreator; 
        unsigned long long _inoBundle; 
        unsigned long long _inoExec; 
        int _mtime; 
        int _rtime; 
        unsigned long long _version; 
        unsigned long long _minSystemVersion; 
        unsigned long long _execSDKVersion; 
        unsigned long long _execMinOSVersion; 
        unsigned int machOUUIDs[4]; 
        unsigned long long sequenceNumber; 
        unsigned long long itemID; 
        unsigned char deviceFamily[3]; 
        unsigned int installType; 
        unsigned int teamID; 
        unsigned int identifier; 
        unsigned int exactIdentifier; 
        unsigned int name; 
        unsigned int displayName; 
        unsigned int companionAppID; 
        unsigned int filename; 
        unsigned int bundleVersion; 
        unsigned int shortVersionString; 
        unsigned int signerIdentity; 
        unsigned int codeInfoIdentifier; 
        unsigned int appType; 
        unsigned long long staticDiskUsage; 
        unsigned long long purchaserDSID; 
        unsigned long long downloaderDSID; 
        unsigned long long familyID; 
        unsigned int vendorName; 
        unsigned int itemName; 
        unsigned long long storefront; 
        unsigned long long versionIdentifier; 
        unsigned long long ratingRank; 
        unsigned int ratingLabel; 
        unsigned int sourceAppIdentifier; 
        unsigned int appVariant; 
        unsigned int iconsDict; 
        unsigned int iconFileNames; 
        unsigned int execPath; 
        unsigned int libraryPath; 
        unsigned int libraryItems; 
        unsigned int claims; 
        unsigned int types; 
        unsigned int services; 
        unsigned int plugins; 
        unsigned int activityTypes; 
        unsigned int schemesWhitelist; 
        unsigned int alias; 
        unsigned int appContainerAlias; 
        unsigned int dataContainerAlias; 
        unsigned int container; 
        unsigned char revision; 
        unsigned char retries; 
        unsigned char _reserved3; 
        unsigned char _reserved4; 
        unsigned int plistRarities; 
        unsigned int commonPlistEntries; 
        unsigned int entitlements; 
        unsigned int groupContainers; 
        unsigned int sandboxEnvironmentVariables; 
        unsigned int _reserved5; 
    }  _bundleData;
    unsigned int  _bundleID;
    NSString * _bundleIdentifier;
    struct LSContext { 
        struct LSDatabase {} *db; 
    }  _context;
    BOOL  _hasContext;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (long)updateBundleRecord;

@end
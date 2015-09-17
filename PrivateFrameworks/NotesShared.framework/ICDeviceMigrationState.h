/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (nonatomic, retain) NSDate *stateModificationDate;

+ (id)allCloudObjects;
+ (id)allKnownDeviceMigrationStates;
+ (id)currentDeviceMigrationState;
+ (id)currentDeviceMigrationStateCreateIfNecessary:(BOOL)arg1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)arg1;
+ (id)deviceMigrationStatesMatchingPredicate:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)identifierForDeviceIdentifier:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2;
+ (id)recordType;
+ (id)stringFromMigrationState:(short)arg1;

- (void)deleteFromLocalDatabase;
- (BOOL)isInICloudAccount;
- (BOOL)isMigrating;
- (id)loggingDescriptionValues;
- (void)mergeDataFromRecord:(id)arg1;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)recordName;
- (id)recordZoneID;
- (id)threadUnsafeNewlyCreatedRecord;

@end
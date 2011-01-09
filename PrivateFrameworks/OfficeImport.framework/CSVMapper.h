/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSMutableArray, CMArchiveManager;



@interface CSVMapper : CMMapper 
{
    CMArchiveManager *mArchiver;
    NSMutableArray *mRows;
    NSString *mFileName;
    NSUInteger mColumnCount;
}


- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(NSUInteger)arg3 archiver:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndOfArticleFetchOperation : FCFetchOperation {
    FCCloudContext * _context;
    FCFeedTransformationEndOfArticle * _endOfArticleTransform;
    <FCFeedPersonalizing> * _feedPersonalizer;
    BOOL  _fetchAllTopics;
    BOOL  _fetchPublisherHeadlines;
    BOOL  _fetchRelatedHeadlines;
    FCHeadline * _headline;
    unsigned int  _minimumPublisherHeadlineCount;
    unsigned int  _minimumRelatedHeadlineCount;
    FCFeedTransformationPersonalizedSort * _personalizationTransform;
    unsigned int  _totalPublisherHeadlineCount;
    unsigned int  _totalRelatedHeadlineCount;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCFeedTransformationEndOfArticle *endOfArticleTransform;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property BOOL fetchAllTopics;
@property BOOL fetchPublisherHeadlines;
@property BOOL fetchRelatedHeadlines;
@property (nonatomic, retain) FCHeadline *headline;
@property unsigned int minimumPublisherHeadlineCount;
@property unsigned int minimumRelatedHeadlineCount;
@property (nonatomic, retain) FCFeedTransformationPersonalizedSort *personalizationTransform;
@property unsigned int totalPublisherHeadlineCount;
@property unsigned int totalRelatedHeadlineCount;

- (void).cxx_destruct;
- (void)_fetchThumbnailsForHeadlines:(id)arg1 callbackQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_filterHeadlines:(id)arg1 completion:(id /* block */)arg2;
- (void)_streamingHeadlinesForArticleIDs:(id)arg1 callbackQueue:(id)arg2 minimumResultCount:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)_streamingHeadlinesForFeedItems:(id)arg1 tagsByID:(id)arg2;
- (id)context;
- (id)endOfArticleTransform;
- (id)feedPersonalizer;
- (BOOL)fetchAllTopics;
- (BOOL)fetchPublisherHeadlines;
- (BOOL)fetchRelatedHeadlines;
- (id)headline;
- (id)initWithContext:(id)arg1 headline:(id)arg2;
- (unsigned int)minimumPublisherHeadlineCount;
- (unsigned int)minimumRelatedHeadlineCount;
- (void)performOperation;
- (id)personalizationTransform;
- (void)prepareOperation;
- (void)setContext:(id)arg1;
- (void)setEndOfArticleTransform:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchAllTopics:(BOOL)arg1;
- (void)setFetchPublisherHeadlines:(BOOL)arg1;
- (void)setFetchRelatedHeadlines:(BOOL)arg1;
- (void)setHeadline:(id)arg1;
- (void)setMinimumPublisherHeadlineCount:(unsigned int)arg1;
- (void)setMinimumRelatedHeadlineCount:(unsigned int)arg1;
- (void)setPersonalizationTransform:(id)arg1;
- (void)setTotalPublisherHeadlineCount:(unsigned int)arg1;
- (void)setTotalRelatedHeadlineCount:(unsigned int)arg1;
- (unsigned int)totalPublisherHeadlineCount;
- (unsigned int)totalRelatedHeadlineCount;

@end